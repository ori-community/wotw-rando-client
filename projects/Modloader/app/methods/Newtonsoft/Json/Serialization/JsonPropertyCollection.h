#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonProperty.h>
#include <Modloader/app/structs/JsonPropertyCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringComparison__Enum.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonPropertyCollection {
    IL2CPP_REGISTER_METHOD(0x01873320, void, ctor, app::JsonPropertyCollection* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x00529D50, app::String*, GetKeyForItem, app::JsonPropertyCollection* this_ptr, app::JsonProperty* item)
    IL2CPP_REGISTER_METHOD(0x01873470, void, AddProperty, app::JsonPropertyCollection* this_ptr, app::JsonProperty* property)
    IL2CPP_REGISTER_METHOD(0x018739A0, app::JsonProperty*, GetClosestMatchProperty, app::JsonPropertyCollection* this_ptr, app::String* property_name)
    IL2CPP_REGISTER_METHOD(0x018739E0, bool, TryGetValue, app::JsonPropertyCollection* this_ptr, app::String* key, app::JsonProperty** item)
    IL2CPP_REGISTER_METHOD(
        0x01873B10,
        app::JsonProperty*,
        GetProperty,
        app::JsonPropertyCollection* this_ptr,
        app::String* property_name,
        app::StringComparison__Enum comparison_type
    )
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonPropertyCollection
