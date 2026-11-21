# Identifying Emotions, Intentions, and Attitudes in Text Using a Game with a Purpose
Lisa Pearl, Mark Steyvers

## Abstract
Describes a methodology for creating databases of messages annotated with social information based on interactie games between humans.

## Introduction
Detecing emotion and subtle information such as anger embarassment and intentions such as persuasion, deception, and attitudes (e.g. disbelief, confidence).
**Sparse Multinomial Logistic Regression classifier**

## 2. Reliable databses of social information
### 2.1 The need for databases
**The Language Understanding Annoation Corpus (LUAC)** includes text annoated with *commited belief*, which distinguishes between statements which assert belief or opinion, those which contain speculation, and statements which convey fact or otherwise do not convey belief."
Meant to aid in determining which beliefs can be ascribed to a communicator and how strongly the communicator holds those beliefs.

Human based computation can leverage this ability from the population, and use it to construct a reliable databse of social information. "Wisdom of the crowds"

### 2.2 Games with a purpose
**GWAP**

### 2.3 A GWAP for social information in text
The GWAP encourages participants to both generate messages that reflect specific social information and to label messages that reflect specific social information and to label messages created by other participants as reflecting specific social information.
Message generators were instructed to generate a message expressing some particular social information type (such as persuading), and were allowed to use a displayed picture as context to guide their messsage, so they would not need to rely completely on their own imaginations.
All context pictures used were meant to be generic enough so they could be a basis for a message expressing a variety of social information types.
Used context pictures to a persuasive message. And later used again to generate a deceptive message.

*Message annotators were instructed to guess which social information type was being expressed by the display message.*

"We can gauge how clearly a message reflect social information by how often it is labeled by others as reflecting that social information."

### A GWAP study
8 types of social information indicative of several social aspects of interest:
politeness (indicates emotional state, attitude), rudeness (indicates emotional state, attitude), embarrassment (indicates emotional state), formality (indicates attitude), persuading (indicates intent), deception (indicates intent), confidence (indicates emotional state, attitude), and disbelief (indicates attitude)

"On average annotators were able to perceive the intended social information 58% of the time."

People pick up on rudeness the easiest. 78% of the time.

### 2.5 Human reliability and message reliability
Researchers believe low perception accuracy indciates that some messages are way better than others at expressing social information in a way obvious to humans.

**Confusion matrix** shows the likelihood that a message will be labeled as expressing specific social information (in a column), given that it has been generated with specific information in mind (in a row).

Identifying messsages likely to be misperceived by humans is useful for two reasons:
1. Cognitiive standpoint, we can identify what features of those messages are the source of the confusion if the messages are consistently misperceived, which tells us that linguistic cues humans are (mistakenly) keying into. Leads to designing better machine learning algorithms.
2. This aids the design of cognitive systems that predict how a message is likely to be interpreted by humans, and can warn a human reader if a message's intent is likely to be interpreted incorrectly.

### Training a classifier with the database
**Sparse Multinomal Logistic Regression (SMLR)**
*Some of the feature-label correlations discovered by the model fit with our intuitions about the social informatoin types. For examples, deceptive messages are negaitvely correlated with some of the first person pronouns (me, my).*

### Conclusion
non-expert annotators were able to identify the social information of interest fairly well when their collective perceptions were combined.
If you use wisdom of the crowd you will have a more accurate representation of the message of the intention.
