#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEventPipeline {
        inline app::IEventPipeline__Class** type_info = (app::IEventPipeline__Class**)(modloader::win::memory::resolve_rva(0x0472F1F8));
        inline app::IEventPipeline__Class* get_class() {
            return il2cpp::get_class<app::IEventPipeline__Class>(type_info, "PlayFab.Pipeline", "IEventPipeline");
        }
        inline app::IEventPipeline__Array* create_array(int size) {
            return il2cpp::array_new<app::IEventPipeline__Array>(get_class(), size);
        }
        inline app::IEventPipeline__Array* create_array(const std::vector<app::IEventPipeline*>& items) {
            return il2cpp::array_new<app::IEventPipeline__Array>(get_class(), items);
        }
    } // namespace IEventPipeline
} // namespace app::classes::types
