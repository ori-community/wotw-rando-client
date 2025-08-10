#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/IFormatProvider.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/TextWriter_SyncTextWriter.h>

namespace app::classes::System::IO::TextWriter_SyncTextWriter {
    IL2CPP_REGISTER_METHOD(0x023882C0, void, ctor, app::TextWriter_SyncTextWriter* this_ptr, app::TextWriter* t)
    IL2CPP_REGISTER_METHOD(0x01706DD0, app::Encoding*, get_Encoding, app::TextWriter_SyncTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01706D40, app::IFormatProvider*, get_FormatProvider, app::TextWriter_SyncTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01706E00, app::String*, get_NewLine, app::TextWriter_SyncTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01706D70, void, Close, app::TextWriter_SyncTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02388390, void, Dispose, app::TextWriter_SyncTextWriter* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01706DA0, void, Flush, app::TextWriter_SyncTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01706E30, void, Write_1, app::TextWriter_SyncTextWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x0199EFC0, void, Write_2, app::TextWriter_SyncTextWriter* this_ptr, app::Char__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x02388430, void, Write_3, app::TextWriter_SyncTextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02388460, void, Write_4, app::TextWriter_SyncTextWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02181070, void, Write_5, app::TextWriter_SyncTextWriter* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x02388490, void, Write_6, app::TextWriter_SyncTextWriter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x023884C0, void, Write_7, app::TextWriter_SyncTextWriter* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x023884F0, void, Write_8, app::TextWriter_SyncTextWriter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01BD2820, void, Write_9, app::TextWriter_SyncTextWriter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x02388520, void, Write_10, app::TextWriter_SyncTextWriter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x01706B90, void, Write_11, app::TextWriter_SyncTextWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02388560, void, Write_12, app::TextWriter_SyncTextWriter* this_ptr, app::String* format, app::Object* arg0)
    IL2CPP_REGISTER_METHOD(
        0x02388590,
        void,
        Write_13,
        app::TextWriter_SyncTextWriter* this_ptr,
        app::String* format,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2
    )
    IL2CPP_REGISTER_METHOD(0x023885C0, void, Write_14, app::TextWriter_SyncTextWriter* this_ptr, app::String* format, app::Object__Array* arg)
    IL2CPP_REGISTER_METHOD(0x023885F0, void, WriteLine_1, app::TextWriter_SyncTextWriter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02388620, void, WriteLine_2, app::TextWriter_SyncTextWriter* this_ptr, char16_t value)
    IL2CPP_REGISTER_METHOD(0x02388650, void, WriteLine_3, app::TextWriter_SyncTextWriter* this_ptr, app::Char__Array* buffer, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02388680, void, WriteLine_4, app::TextWriter_SyncTextWriter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x023886B0, void, WriteLine_5, app::TextWriter_SyncTextWriter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x023886E0, void, WriteLine_6, app::TextWriter_SyncTextWriter* this_ptr, app::String* format, app::Object* arg0)
    IL2CPP_REGISTER_METHOD(0x02388710, void, WriteLine_7, app::TextWriter_SyncTextWriter* this_ptr, app::String* format, app::Object* arg0, app::Object* arg1)
    IL2CPP_REGISTER_METHOD(
        0x02388740,
        void,
        WriteLine_8,
        app::TextWriter_SyncTextWriter* this_ptr,
        app::String* format,
        app::Object* arg0,
        app::Object* arg1,
        app::Object* arg2
    )
    IL2CPP_REGISTER_METHOD(0x0201CA50, void, WriteLine_9, app::TextWriter_SyncTextWriter* this_ptr, app::String* format, app::Object__Array* arg)
} // namespace app::classes::System::IO::TextWriter_SyncTextWriter
