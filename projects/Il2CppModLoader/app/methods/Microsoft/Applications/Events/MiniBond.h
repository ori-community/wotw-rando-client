#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Microsoft::Applications::Events::MiniBond {
    IL2CPP_REGISTER_METHOD(0x002FD800, void, Serialize_1, (app::CompactBinaryProtocolWriter * writer, app::Ingest* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FD9C0, void, Serialize_2, (app::CompactBinaryProtocolWriter * writer, app::User* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FDB10, void, Serialize_3, (app::CompactBinaryProtocolWriter * writer, app::Device* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FDDA0, void, Serialize_4, (app::CompactBinaryProtocolWriter * writer, app::Os* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FDF30, void, Serialize_5, (app::CompactBinaryProtocolWriter * writer, app::App* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FE180, void, Serialize_6, (app::CompactBinaryProtocolWriter * writer, app::Utc* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FE4E0, void, Serialize_7, (app::CompactBinaryProtocolWriter * writer, app::Xbl* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FEBF0, void, Serialize_8, (app::CompactBinaryProtocolWriter * writer, app::Javascript* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FF3C0, void, Serialize_9, (app::CompactBinaryProtocolWriter * writer, app::Protocol* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FF730, void, Serialize_10, (app::CompactBinaryProtocolWriter * writer, app::Receipts* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FF820, void, Serialize_11, (app::CompactBinaryProtocolWriter * writer, app::Net* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FF820, void, Serialize_12, (app::CompactBinaryProtocolWriter * writer, app::Loc* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FF960, void, Serialize_13, (app::CompactBinaryProtocolWriter * writer, app::Sdk* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FFAF0, void, Serialize_14, (app::CompactBinaryProtocolWriter * writer, app::PII* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FFAF0, void, Serialize_15, (app::CompactBinaryProtocolWriter * writer, app::CustomerContent* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FFB80, void, Serialize_16, (app::CompactBinaryProtocolWriter * writer, app::Attributes* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FFFD0, void, Serialize_17, (app::CompactBinaryProtocolWriter * writer, app::Value* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x00301210, void, Serialize_18, (app::CompactBinaryProtocolWriter * writer, app::Data* value, bool is_base))
    IL2CPP_REGISTER_METHOD(0x00301470, void, Serialize_19, (app::CompactBinaryProtocolWriter * writer, app::CsEvent* value, bool is_base))
} // namespace app::classes::Microsoft::Applications::Events::MiniBond
