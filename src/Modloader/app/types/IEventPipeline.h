#pragma once
#include <Modloader/app/structs/IEventPipeline.h>
#include <Modloader/app/structs/IEventPipeline__Array.h>
#include <Modloader/app/structs/IEventPipeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEventPipeline {
        inline app::IEventPipeline__Class** type_info() {
            static app::IEventPipeline__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEventPipeline__Class**)(modloader::win::memory::resolve_rva(0x0472F1F8));
            }
            return cache;
        }
        inline app::IEventPipeline__Class* get_class() {
            return il2cpp::get_class<app::IEventPipeline__Class>(type_info(), "PlayFab.Pipeline", "IEventPipeline");
        }
        inline app::IEventPipeline__Array* create_array(int size) {
            return il2cpp::array_new<app::IEventPipeline__Array>(get_class(), size);
        }
        inline app::IEventPipeline__Array* create_array(const std::vector<app::IEventPipeline*>& items) {
            return il2cpp::array_new<app::IEventPipeline__Array>(get_class(), items);
        }
    } // namespace IEventPipeline
} // namespace app::classes::types
