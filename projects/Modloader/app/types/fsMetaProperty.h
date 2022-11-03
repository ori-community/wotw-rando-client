#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsMetaProperty {
        inline app::fsMetaProperty__Class** type_info = (app::fsMetaProperty__Class**)(modloader::win::memory::resolve_rva(0x047613B0));
        inline app::fsMetaProperty__Class* get_class() {
            return il2cpp::get_class<app::fsMetaProperty__Class>(type_info, "FullSerializer.Internal", "fsMetaProperty");
        }
        inline app::fsMetaProperty* create() {
            return il2cpp::create_object<app::fsMetaProperty>(get_class());
        }
        inline app::fsMetaProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::fsMetaProperty__Array>(get_class(), size);
        }
        inline app::fsMetaProperty__Array* create_array(const std::vector<app::fsMetaProperty*>& items) {
            return il2cpp::array_new<app::fsMetaProperty__Array>(get_class(), items);
        }
    } // namespace fsMetaProperty
} // namespace app::classes::types
