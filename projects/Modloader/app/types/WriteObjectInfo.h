#pragma once
#include <Modloader/app/structs/WriteObjectInfo.h>
#include <Modloader/app/structs/WriteObjectInfo__Array.h>
#include <Modloader/app/structs/WriteObjectInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteObjectInfo {
        inline app::WriteObjectInfo__Class** type_info() {
            static app::WriteObjectInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WriteObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04794C60));
            }
            return cache;
        }
        inline app::WriteObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::WriteObjectInfo__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
        }
        inline app::WriteObjectInfo* create() {
            return il2cpp::create_object<app::WriteObjectInfo>(get_class());
        }
        inline app::WriteObjectInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::WriteObjectInfo__Array>(get_class(), size);
        }
        inline app::WriteObjectInfo__Array* create_array(const std::vector<app::WriteObjectInfo*>& items) {
            return il2cpp::array_new<app::WriteObjectInfo__Array>(get_class(), items);
        }
    } // namespace WriteObjectInfo
} // namespace app::classes::types
