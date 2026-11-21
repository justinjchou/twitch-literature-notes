# Computational cognitive modeling for syntactic acquisition: Approaches that integrate information from multiple places
Lisa Pearl, UC Irvine

## Introduction

### 1.1 About computational cognitive modeling for syntactic acquisition
*Cognitive* refers to what the implemented ideas are about, which is some part of human cognition.
With this tool of computational cognitive modeling, we can then make a theory about syntactic acquisition concrete enough to evaluate, because the computational cognitive model allows us to generate predicitions about children's syntactic behavior that can be evaluated. 
When we have a computational cognitive model for syntactic acquisition, we have a theory about syntactic acquisition that is implemented precisely enough to evaluate against empirical data.

Importantly, the computational cognitive model serves as a "proof of concept" for a theory. When the model generates predictions that match human behavior (e.g. children's syntactic behavior), this is proof there is at least one way the theory could explain human behavior - *which is the way the theory was implemented in the computational cognitive model.*

An important limitation of computational modeling is that modeling success (or failure) can only be interpreted with respect to the specific theory implemented by the model.

Implementation dictates the success of the model.

To evaluate some other theory implementation, need to build another model and see how it does.

### Implementing a theory in a computational cognitive model
1. Model needs to encdoe relevant prior knowledge and learning abilities the child is supposed to have at this stage of development.
2. Model needs to learn from realistic input.
3. Model needs to output predictions that connect in some interpretable way to children's behavior.
4. Model needs to encode learning, which is how the modeled child uses the information from the input to update hypotheses about syntax. Learning is typically the main component specified by the acquisition theory.

Impelementing an acquistion theory in a computational cognitive model involves encoding the acquistion theory assumes. 

### 1.3 Road map
Children are likely to be impacted by non-linguistic factors during acquisition. 

### 2 Some modeling case studies in syntactic acquisition
Describe the syntactic knowledge children are trying to acquire.

### 2.1 Linking theories
Lexical semantics: AGENT, PATIENT, LOCATION
A verb class can involve many linking behaviors

*Pearl & Sprouse* made the idealing assumption that children would have enough prior knowledge and sufficient learning abilites to accurately extract this information from any particular verb use they encountered.

The way English-learning children cluster verbs together during syntactic acquistion aligns with them learning not just from syntactic information, but also from non-syntactic information.

### 2.2 Passives
Passive structure in English allows  the subject to be a PATIENT 
- A key learning problem is to learn which verbs in English can be passivize (which verbs allow the structure and related interpretation with the subject as PATIENT).

**The acquistion theory implemented in the model** 
Nguyen and Pearl proposed that children decide whether a verb is passivizbable on the basis of two things.
1. Children consider several of the verb's lexical semantic features (like being observable or a psych subject-experiencer verb) and potentially the syntactic feature of transitivity, as proposed by prior acquisition theories.
2. Children consider how often often verbs with those features are passivized in their input.

**What we learned**
These modeling results suggest that 5 year old passivizatoin behavior can be captured if five-year-olds selectively attend to these syntactic and lexical semantic features in their input.

The modeling results thus offer specific explanations about how cognitive limitations (whether their specific source happens to be) could impact children's pronoun interpretation preferences, if children rely on these linguistic information sources.

### 3 Some experimental work to take inspiration from

### 3.1 Cognitive limitations
Model of Forsythe & Pearl highlighted one effect that cognitive limitations could have on children's acquistion (syntactic or otherwise): children have adult-like knowledge but can't deploy it effectively in the moment.

### 3.2 Pragmatics and world knowledge

### Moving forward
*In general I think questions of how acquisition works and why children behave as they do are much easier to investigate with modeling.*

Model input is based on estimates of the information children encounter in their language interactions.

Model learning mechanisms are based on ideas of what abilities and learning biases children demonstrate at certain ages.

Model output is based on data collected from children (or that can be collected in the future), so that the model can explain children’s observed linguistic behavior.

### 4.1 Building better models
We can also observe children’s behavior at any stage of development, either through naturalistic productions and behavior or clever experimental designs that elicit productions or behavior

### 4.2 Incorporating non-syntactic components into acquisition models
Prior behavioral work has also found that children can use both pragmatic and world knowledge to help them choose between potential interpretations of pronouns.

The modeled children in these studies incorporated both pragmatic knowledge about what speakers think the topic of conversation is and world knowledge about the event described (e.g., how likely horses are to jump) into the perceptual intake. Notably, differences in children’s ability to adjust their expectations about the pragmatics and world of the experiment – due to immature non-linguistic systems – can explain children’s observed non-adult-like behavior, according to these models.

Useful for future computational cognitive models to consider the impact of these developing non-linguistic systems when accounting for children's behavior (i.e. the output generation process).

### 4.3 Thinking about simultaneous acquisition
By learning to do this, modeled children learn to have adult-like preferences about how good different wh-dependencies are
