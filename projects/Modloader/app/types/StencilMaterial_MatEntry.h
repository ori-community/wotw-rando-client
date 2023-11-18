#pragma once
#include <Modloader/app/structs/StencilMaterial_MatEntry.h>
#include <Modloader/app/structs/StencilMaterial_MatEntry__Array.h>
#include <Modloader/app/structs/StencilMaterial_MatEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StencilMaterial_MatEntry {
        inline app::StencilMaterial_MatEntry__Class** type_info() {
            static app::StencilMaterial_MatEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StencilMaterial_MatEntry__Class**)(modloader::win::memory::resolve_rva(0x047585D8));
            }
            return cache;
        }
        inline app::StencilMaterial_MatEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::StencilMaterial_MatEntry__Class>(type_info(), "UnityEngine.UI", "StencilMaterial", "MatEntry");
        }
        inline app::StencilMaterial_MatEntry* create() {
            return il2cpp::create_object<app::StencilMaterial_MatEntry>(get_class());
        }
        inline app::StencilMaterial_MatEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::StencilMaterial_MatEntry__Array>(get_class(), size);
        }
        inline app::StencilMaterial_MatEntry__Array* create_array(const std::vector<app::StencilMaterial_MatEntry*>& items) {
            return il2cpp::array_new<app::StencilMaterial_MatEntry__Array>(get_class(), items);
        }
    } // namespace StencilMaterial_MatEntry
} // namespace app::classes::types
