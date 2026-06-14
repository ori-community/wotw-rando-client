#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IL2CPPPrewarmOperation.h>

namespace app::classes::frameworks::loading::Prewarmers::IL2CPPPrewarmOperation {
    IL2CPP_REGISTER_METHOD(0x00F60540, void, ctor, app::IL2CPPPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F60640, bool, Begin, app::IL2CPPPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F606C0, bool, Update, app::IL2CPPPrewarmOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F5F8F0, bool, FinishImmediately, app::IL2CPPPrewarmOperation* this_ptr)
} // namespace app::classes::frameworks::loading::Prewarmers::IL2CPPPrewarmOperation
