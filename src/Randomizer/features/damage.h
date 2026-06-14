#pragma once


namespace randomizer::damage {
    /**
     * Applies `amount` damage to all enemies. If `force` is true, enemies that usually
     * cannot be damaged right now also take damage (e.g. Shriek 4th phase intro)
     */
    void damage_all_enemies(float amount, bool force = false);
}
