#pragma once
#include <Modloader/app/structs/HookFlingPlant.h>
#include <Modloader/app/structs/HookFlingPlant__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HookFlingPlant {
        inline app::HookFlingPlant__Class** type_info() {
            static app::HookFlingPlant__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HookFlingPlant__Class**)(modloader::win::memory::resolve_rva(0x047457F0));
            }
            return cache;
        }
        inline app::HookFlingPlant__Class* get_class() {
            return il2cpp::get_class<app::HookFlingPlant__Class>(type_info(), "", "HookFlingPlant");
        }
        inline app::HookFlingPlant* create() {
            return il2cpp::create_object<app::HookFlingPlant>(get_class());
        }
    } // namespace HookFlingPlant
} // namespace app::classes::types
