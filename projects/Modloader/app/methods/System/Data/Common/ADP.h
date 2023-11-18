#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AcceptRejectRule__Enum.h>
#include <Modloader/app/structs/ArgumentException.h>
#include <Modloader/app/structs/ArgumentOutOfRangeException.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/InvalidOperationException.h>
#include <Modloader/app/structs/MissingSchemaAction__Enum.h>
#include <Modloader/app/structs/NotSupportedException.h>
#include <Modloader/app/structs/Rule__Enum.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Data::Common::ADP {
    IL2CPP_REGISTER_METHOD(0x02153240, void, TraceException, (app::String * trace, app::Exception* e))
    IL2CPP_REGISTER_METHOD(0x02153310, void, TraceExceptionAsReturnValue, (app::Exception * e))
    IL2CPP_REGISTER_METHOD(0x021533B0, void, TraceExceptionWithoutRethrow, (app::Exception * e))
    IL2CPP_REGISTER_METHOD(0x02153450, app::ArgumentException*, Argument, (app::String * error))
    IL2CPP_REGISTER_METHOD(0x021535D0, app::ArgumentOutOfRangeException*, ArgumentOutOfRange_1, (app::String * parameter_name))
    IL2CPP_REGISTER_METHOD(0x02153750, app::ArgumentOutOfRangeException*, ArgumentOutOfRange_2, (app::String * message, app::String* parameter_name))
    IL2CPP_REGISTER_METHOD(0x021538D0, app::InvalidOperationException*, InvalidOperation, (app::String * error))
    IL2CPP_REGISTER_METHOD(0x02153A50, app::NotSupportedException*, NotSupported, (app::String * error))
    IL2CPP_REGISTER_METHOD(0x02153BD0, bool, IsCatchableExceptionType, (app::Exception * e))
    IL2CPP_REGISTER_METHOD(0x02153EA0, bool, IsCatchableOrSecurityExceptionType, (app::Exception * e))
    IL2CPP_REGISTER_METHOD(0x02154120, app::ArgumentOutOfRangeException*, InvalidEnumerationValue, (app::Type * type, int32_t value))
    IL2CPP_REGISTER_METHOD(0x02154260, app::Exception*, InvalidSeekOrigin, (app::String * parameter_name))
    IL2CPP_REGISTER_METHOD(0x02154300, app::ArgumentOutOfRangeException*, InvalidAcceptRejectRule, (app::AcceptRejectRule__Enum value))
    IL2CPP_REGISTER_METHOD(0x021543D0, app::ArgumentOutOfRangeException*, InvalidMissingSchemaAction, (app::MissingSchemaAction__Enum value))
    IL2CPP_REGISTER_METHOD(0x021544A0, app::ArgumentOutOfRangeException*, InvalidRule, (app::Rule__Enum value))
    IL2CPP_REGISTER_METHOD(0x02154570, app::Exception*, WrongType, (app::Type * got, app::Type* expected))
    IL2CPP_REGISTER_METHOD(0x02154670, void, cctor, ())
} // namespace app::classes::System::Data::Common::ADP
