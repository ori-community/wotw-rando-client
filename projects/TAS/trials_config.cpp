#include <Core/api/game/trials.h>
#include <Modloader/common.h>

namespace {
    void initialize() {
        game::trials::add_ghosts_directory_suffix("tas");
    }

    CALL_AFTER_INJECT(initialize);
} // namespace
