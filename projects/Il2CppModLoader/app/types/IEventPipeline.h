#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEventPipeline {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEventPipeline__Class** type_info;
        inline app::IEventPipeline__Class* get_class() {
            return il2cpp::get_class<app::IEventPipeline__Class>(type_info, "PlayFab.Pipeline", "IEventPipeline");
        }
        inline app::IEventPipeline* create() {
            return il2cpp::create_object<app::IEventPipeline>(get_class());
        }
        inline app::IEventPipeline__Array* create_array(int size) {
            return il2cpp::array_new<app::IEventPipeline__Array>(get_class(), size);
        }
    } // namespace IEventPipeline
} // namespace app::classes::types
