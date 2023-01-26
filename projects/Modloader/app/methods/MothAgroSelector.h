#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MothAgroSelector.h>

namespace app::classes::MothAgroSelector {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MothAgroSelector * this_ptr))
}
