#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo * this_ptr, app::String* contract_type_name, app::String* created_type_name, app::String* builder_type_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_ContractTypeName, (app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ContractTypeName, (app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_CreatedTypeName, (app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_CreatedTypeName, (app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_BuilderTypeName, (app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_BuilderTypeName, (app::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo * this_ptr, app::String* value))
} // namespace app::classes::Newtonsoft::Json::Utilities::ImmutableCollectionsUtils_ImmutableCollectionTypeInfo
