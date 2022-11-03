#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FullSerializer::fsAotCompilationManager {
    IL2CPP_REGISTER_METHOD(0x01505520, bool, HasMember, (app::fsAotVersionInfo version_info, app::fsAotVersionInfo_Member member))
    IL2CPP_REGISTER_METHOD(0x015055E0, bool, IsAotModelUpToDate, (app::fsMetaType * current_model, app::fsIAotConverter* aot_model))
    IL2CPP_REGISTER_METHOD(0x015057F0, app::String*, RunAotCompilationForType, (app::fsConfig * config, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01505900, app::String*, EmitVersionInfo, (app::String * prefix, app::Type* type, app::fsMetaProperty__Array* members, bool is_constructor_public))
    IL2CPP_REGISTER_METHOD(0x01505DA0, app::String*, GetConverterString, (app::fsMetaProperty * member))
    IL2CPP_REGISTER_METHOD(0x01505ED0, app::String*, GetQualifiedConverterNameForType, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01505FF0, app::String*, GenerateDirectConverterForTypeInCSharp, (app::Type * type, app::fsMetaProperty__Array* members, bool is_constructor_public))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::fsAotCompilationManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01507310, void, cctor, ())
} // namespace app::classes::FullSerializer::fsAotCompilationManager
