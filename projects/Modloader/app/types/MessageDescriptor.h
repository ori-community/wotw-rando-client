#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageDescriptor {
        inline app::MessageDescriptor__Class** type_info = (app::MessageDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04708F20));
        inline app::MessageDescriptor__Class* get_class() {
            return il2cpp::get_class<app::MessageDescriptor__Class>(type_info, "", "MessageDescriptor");
        }
        inline app::MessageDescriptor* create() {
            return il2cpp::create_object<app::MessageDescriptor>(get_class());
        }
        inline app::MessageDescriptor__Boxed* box(app::MessageDescriptor value) {
            return il2cpp::box_value<app::MessageDescriptor__Boxed>(get_class(), value);
        }
        inline app::MessageDescriptor__Array* create_array(int size) {
            return il2cpp::array_new<app::MessageDescriptor__Array>(get_class(), size);
        }
        inline app::MessageDescriptor__Array* create_array(const std::vector<app::MessageDescriptor>& items) {
            return il2cpp::array_new<app::MessageDescriptor__Array>(get_class(), items);
        }
    } // namespace MessageDescriptor
} // namespace app::classes::types
