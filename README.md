# Martingale-System
The usage of the *Martingale System* in betting, decided to try this method for fun and create a simulation. The code consist of simple loops, math, and some luck ;)

### `Project made out of fun and curiosity :D`

## Summary
*The Martingale method* is just doubling down on lost bets and halving winning wagers. It is simply a technique that develops a loss-averse mindset in order to maximize the possibilities of breaking even while also increasing the chances of severe and sudden losses.

## What causes the martingale to fail?
The difficulty with the martingale technique is that a single lost strike might wipe out your whole bankroll. Also adding the fact that it has a small chance it lands on green, limiting the factors that your chances won't be `50% / 50%`, assuming you're playing on the roulette.

## Formula
A discrete-time martingale is a discrete-time stochastic process (i.e., a series of random variables) X1, X2, X3,... that holds true for any time N.

<img width="348" alt="Screen Shot 2022-07-19 at 10 53 24 PM" src="https://user-images.githubusercontent.com/66978846/179885921-6b882803-399c-416d-8b21-e83702f0313e.png">

Assume X is an integer.

- Place X coins on odd.
- Allow the roulette wheel to spin.
- If the results is unexpected, print it.
- X:= 2 * X, and then repeat the method from the beginning.

Drawback:

- It does not have a limitless supply of money or coins. As an example, suppose even numbers appear on 9 consecutive spins. It is now necessary to have 2^10 * X coins = 1024x coins.
- Another disadvantage is that most casinos have a maximum wager you may put. A tragedy will occur in the extremely improbable case of several consecutive defeats.
- "I have enough coins, and the profit I wish to make is much lower, less than 1% of the coins I have." What are the chances?

Probability:

- It should be noted that the feature of being a martingale entails both filtering and probability measurement (with respect to which the expectations are taken). It is conceivable for Y to be a martingale with respect to one measure but not another; the Girsanov theorem provides a method for determining which measure an It process is a martingale with regard to.
