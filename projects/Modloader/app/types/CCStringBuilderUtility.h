#pragma once
#include <Modloader/app/structs/CCStringBuilderUtility.h>
#include <Modloader/app/structs/CCStringBuilderUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCStringBuilderUtility {
        inline app::CCStringBuilderUtility__Class** type_info() {
            static app::CCStringBuilderUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCStringBuilderUtility__Class**)(modloader::win::memory::resolve_rva(0x0472DE58));
            }
            return cache;
        }
        inline app::CCStringBuilderUtility__Class* get_class() {
            return il2cpp::get_class<app::CCStringBuilderUtility__Class>(type_info(), "", "CCStringBuilderUtility");
        }
        inline app::CCStringBuilderUtility* create() {
            return il2cpp::create_object<app::CCStringBuilderUtility>(get_class());
        }
    } // namespace CCStringBuilderUtility
} // namespace app::classes::types
