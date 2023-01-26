#pragma once
#include <Modloader/app/structs/RetriveActionStates.h>
#include <Modloader/app/structs/RetriveActionStates__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RetriveActionStates {
        inline app::RetriveActionStates__Class** type_info() {
            static app::RetriveActionStates__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RetriveActionStates__Class**)(modloader::win::memory::resolve_rva(0x047800D8));
            }
            return cache;
        }
        inline app::RetriveActionStates__Class* get_class() {
            return il2cpp::get_class<app::RetriveActionStates__Class>(type_info(), "", "RetriveActionStates");
        }
        inline app::RetriveActionStates* create() {
            return il2cpp::create_object<app::RetriveActionStates>(get_class());
        }
    } // namespace RetriveActionStates
} // namespace app::classes::types
