#pragma once
#include <Modloader/app/structs/BeforeRenderHelper.h>
#include <Modloader/app/structs/BeforeRenderHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BeforeRenderHelper {
        inline app::BeforeRenderHelper__Class** type_info() {
            static app::BeforeRenderHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BeforeRenderHelper__Class**)(modloader::win::memory::resolve_rva(0x0478AF08));
            }
            return cache;
        }
        inline app::BeforeRenderHelper__Class* get_class() {
            return il2cpp::get_class<app::BeforeRenderHelper__Class>(type_info(), "UnityEngine", "BeforeRenderHelper");
        }
        inline app::BeforeRenderHelper* create() {
            return il2cpp::create_object<app::BeforeRenderHelper>(get_class());
        }
    } // namespace BeforeRenderHelper
} // namespace app::classes::types
