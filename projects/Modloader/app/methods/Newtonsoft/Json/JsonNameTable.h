#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonNameTable.h>

namespace app::classes::Newtonsoft::Json::JsonNameTable {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::JsonNameTable* this_ptr)
}
