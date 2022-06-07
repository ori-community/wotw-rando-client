#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StarSlugCrawlingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::StarSlugCrawlingState * this_ptr, app::StarSlugEnemy * slug))
    IL2CPP_REGISTER_METHOD(0x009AF300, void, UpdateState, (app::StarSlugCrawlingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AF600, void, OnExit, (app::StarSlugCrawlingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009AF660, void, OnEnter, (app::StarSlugCrawlingState * this_ptr))
}
