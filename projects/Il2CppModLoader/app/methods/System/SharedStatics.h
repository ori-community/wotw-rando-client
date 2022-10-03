#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::SharedStatics {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SharedStatics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E259D0, app::Tokenizer_StringMaker*, GetSharedStringMaker, ())
    IL2CPP_REGISTER_METHOD(0x01E25D30, void, ReleaseSharedStringMaker, (app::Tokenizer_StringMaker * *maker))
    IL2CPP_REGISTER_METHOD(0x01E25ED0, void, cctor, ())
} // namespace app::classes::System::SharedStatics
