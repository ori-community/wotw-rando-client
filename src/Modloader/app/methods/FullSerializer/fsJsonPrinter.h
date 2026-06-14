#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TextWriter.h>
#include <Modloader/app/structs/fsData.h>

namespace app::classes::FullSerializer::fsJsonPrinter {
    IL2CPP_REGISTER_METHOD(0x0150FB10, void, InsertSpacing, app::TextWriter* stream, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0150FBD0, app::String*, EscapeString, app::String* str)
    IL2CPP_REGISTER_METHOD(0x01510080, void, BuildCompressedString, app::fsData* data, app::TextWriter* stream)
    IL2CPP_REGISTER_METHOD(0x015105A0, void, BuildPrettyString, app::fsData* data, app::TextWriter* stream, int32_t depth)
    IL2CPP_REGISTER_METHOD(0x01510BE0, void, PrettyJson_1, app::fsData* data, app::TextWriter* output_stream)
    IL2CPP_REGISTER_METHOD(0x01510BF0, app::String*, PrettyJson_2, app::fsData* data)
    IL2CPP_REGISTER_METHOD(0x01510ED0, void, CompressedJson_1, app::fsData* data, app::StreamWriter* output_stream)
    IL2CPP_REGISTER_METHOD(0x01510EE0, app::String*, CompressedJson_2, app::fsData* data)
    IL2CPP_REGISTER_METHOD(0x015111C0, app::String*, ConvertDoubleToString, double d)
} // namespace app::classes::FullSerializer::fsJsonPrinter
