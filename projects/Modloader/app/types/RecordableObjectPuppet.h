#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecordableObjectPuppet {
        inline app::RecordableObjectPuppet__Class** type_info = (app::RecordableObjectPuppet__Class**)(modloader::win::memory::resolve_rva(0x04780B60));
        inline app::RecordableObjectPuppet__Class* get_class() {
            return il2cpp::get_class<app::RecordableObjectPuppet__Class>(type_info, "", "RecordableObjectPuppet");
        }
        inline app::RecordableObjectPuppet* create() {
            return il2cpp::create_object<app::RecordableObjectPuppet>(get_class());
        }
        inline app::RecordableObjectPuppet__Array* create_array(int size) {
            return il2cpp::array_new<app::RecordableObjectPuppet__Array>(get_class(), size);
        }
        inline app::RecordableObjectPuppet__Array* create_array(const std::vector<app::RecordableObjectPuppet*>& items) {
            return il2cpp::array_new<app::RecordableObjectPuppet__Array>(get_class(), items);
        }
    } // namespace RecordableObjectPuppet
} // namespace app::classes::types
