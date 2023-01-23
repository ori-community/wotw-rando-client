#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FileSet.h>

namespace app::classes::PlayFab::PlayStreamModels::FileSet {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::FileSet * this_ptr))
}
