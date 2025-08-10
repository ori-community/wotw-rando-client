#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>

namespace app::classes::System::IO::TextWriter {
    IL2CPP_REGISTER_METHOD(0x02385F00, app::String*, get_InitialNewLine, )
    IL2CPP_REGISTER_METHOD(0x02385F10, void, ctor_1, app::TextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02385FD0, void, ctor_2, app::TextWriter* this_ptr, app::IFormatProvider* format_provider)
    IL2CPP_REGISTER_METHOD(0x023860A0, app::IFormatProvider*, get_FormatProvider, app::TextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023860E0, void, Close, app::TextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_1, app::TextWriter* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x02386190, void, Dispose_2, app::TextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, app::TextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02386240, app::String*, get_NewLine, app::TextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02386250, app::TextWriter*, Synchronized, app::TextWriter* writer)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Write_1, app::TextWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x02386490, void, Write_2, app::TextWriter* this_ptr, app::Char__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x023864C0, void, Write_3, app::TextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x023866E0, void, Write_4, app::TextWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02386740, void, Write_5, app::TextWriter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x023867A0, void, Write_6, app::TextWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02386800, void, Write_7, app::TextWriter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x02386860, void, Write_8, app::TextWriter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x023868C0, void, Write_9, app::TextWriter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x02386920, void, Write_10, app::TextWriter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x02386990, void, Write_11, app::TextWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x023869D0, void, Write_12, app::TextWriter* this_ptr, app::String* format, app::Object* arg0)
    IL2CPP_REGISTER_METHOD(0x02386A80, void, Write_13, app::TextWriter* this_ptr, app::String* format, app::Object* arg0, app::Object* arg1, app::Object* arg2)
    IL2CPP_REGISTER_METHOD(0x02386B10, void, Write_14, app::TextWriter* this_ptr, app::String* format, app::Object__Array* arg)
    IL2CPP_REGISTER_METHOD(0x02386B70, void, WriteLine_1, app::TextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02386B90, void, WriteLine_2, app::TextWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x02386BD0, void, WriteLine_3, app::TextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02386C10, void, WriteLine_4, app::TextWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02386C50, void, WriteLine_5, app::TextWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02386ED0, void, WriteLine_6, app::TextWriter* this_ptr, app::String* format, app::Object* arg0)
    IL2CPP_REGISTER_METHOD(0x02386F80, void, WriteLine_7, app::TextWriter* this_ptr, app::String* format, app::Object* arg0, app::Object* arg1)
    IL2CPP_REGISTER_METHOD(
        0x02387040,
        void,
        WriteLine_8,
        app::TextWriter* this_ptr,
        app::String* format,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2
    )
    IL2CPP_REGISTER_METHOD(0x023870D0, void, WriteLine_9, app::TextWriter* this_ptr, app::String* format, app::Object__Array* arg)
    IL2CPP_REGISTER_METHOD(0x02387130, void, cctor, )
} // namespace app::classes::System::IO::TextWriter
