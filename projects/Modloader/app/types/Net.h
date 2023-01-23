#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Net__Class.h>
#include <Modloader/app/structs/Net.h>
#include <Modloader/app/structs/Net__Array.h>

namespace app::classes::types {
    namespace Net {
        namespace {
            inline app::Net__Class* type_info_ref = nullptr;
        }
        inline app::Net__Class** type_info = &type_info_ref;
        inline app::Net__Class* get_class() {
            return il2cpp::get_class<app::Net__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Net");
        }
        inline app::Net* create() {
            return il2cpp::create_object<app::Net>(get_class());
        }
        inline app::Net__Array* create_array(int size) {
            return il2cpp::array_new<app::Net__Array>(get_class(), size);
        }
        inline app::Net__Array* create_array(const std::vector<app::Net*>& items) {
            return il2cpp::array_new<app::Net__Array>(get_class(), items);
        }
    } // namespace Net
} // namespace app::classes::types
