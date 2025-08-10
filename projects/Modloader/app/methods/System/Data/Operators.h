#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::Operators {
    IL2CPP_REGISTER_METHOD(0x01E47D50, bool, IsArithmetical, int32_t op)
    IL2CPP_REGISTER_METHOD(0x01E47D70, bool, IsLogical, int32_t op)
    IL2CPP_REGISTER_METHOD(0x01E47D90, bool, IsRelational, int32_t op)
    IL2CPP_REGISTER_METHOD(0x01E47DA0, int32_t, Priority, int32_t op)
    IL2CPP_REGISTER_METHOD(0x01E47EB0, app::String*, ToString, int32_t op)
    IL2CPP_REGISTER_METHOD(0x01E47FC0, void, cctor, )
} // namespace app::classes::System::Data::Operators
