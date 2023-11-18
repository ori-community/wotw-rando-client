#pragma once
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo.h>
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo__Array.h>
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoCustomAttrs_AttributeInfo {
        inline app::MonoCustomAttrs_AttributeInfo__Class** type_info() {
            static app::MonoCustomAttrs_AttributeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MonoCustomAttrs_AttributeInfo__Class**)(modloader::win::memory::resolve_rva(0x0476E808));
            }
            return cache;
        }
        inline app::MonoCustomAttrs_AttributeInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::MonoCustomAttrs_AttributeInfo__Class>(type_info(), "System", "MonoCustomAttrs", "AttributeInfo");
        }
        inline app::MonoCustomAttrs_AttributeInfo* create() {
            return il2cpp::create_object<app::MonoCustomAttrs_AttributeInfo>(get_class());
        }
        inline app::MonoCustomAttrs_AttributeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::MonoCustomAttrs_AttributeInfo__Array>(get_class(), size);
        }
        inline app::MonoCustomAttrs_AttributeInfo__Array* create_array(const std::vector<app::MonoCustomAttrs_AttributeInfo*>& items) {
            return il2cpp::array_new<app::MonoCustomAttrs_AttributeInfo__Array>(get_class(), items);
        }
    } // namespace MonoCustomAttrs_AttributeInfo
} // namespace app::classes::types
