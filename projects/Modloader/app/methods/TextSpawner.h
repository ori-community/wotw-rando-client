#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TextSpawner {
    IL2CPP_REGISTER_METHOD(0x010E8B80, void, Start, (app::TextSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::TextSpawner * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8DF0, void, ctor, (app::TextSpawner * this_ptr))
} // namespace app::classes::TextSpawner
