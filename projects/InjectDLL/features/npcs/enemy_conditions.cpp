#include <randomizer/conditions/condition_override.h>

#include <Il2CppModLoader/common.h>

namespace
{
    std::optional<bool> always_true(std::string_view path, void* obj) {
        return true;
    }

	void initialize() {
        // The deactivate entries have an inverter set up in their ActivateBasedOnCondition component.
        randomizer::conditions::register_condition_intercept("swampNightcrawlerCavernD/enemies/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampNightcrawlerCavernA/interactives/enemies/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampNightcrawlerA/enemies/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampTorchIntroductionA/enemies/activateAfterSword/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampTorchIntroductionA/enemies/deactivateAfterSword/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampWalljumpChallengeA/enemies/activateAfterSword/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampWalljumpChallengeA/enemies/deactivateAfterSword/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampWalljumpChallengeB/enemies/activateAfterSword/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampWalljumpChallengeB/enemies/deactivateAfterSword/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampIntroBottom/interactives/enemies/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("swampIntroTop/enemies/activateBasedOnCondition/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("willOfTheWispsLagoonConnection/enemies/activateAfterSword/enemyActivator", &always_true);
        randomizer::conditions::register_condition_intercept("willOfTheWispsLagoonConnection/enemies/deactivateAfterSword/enemyActivator", &always_true);
	}

	CALL_ON_INIT(initialize);
}
