#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Xbl__Class.h>
#include <Modloader/app/structs/Xbl.h>
#include <Modloader/app/structs/Xbl__Array.h>

namespace app::classes::types {
    namespace Xbl {
        namespace {
            inline app::Xbl__Class* type_info_ref = nullptr;
        }
        inline app::Xbl__Class** type_info = &type_info_ref;
        inline app::Xbl__Class* get_class() {
            return il2cpp::get_class<app::Xbl__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Xbl");
        }
        inline app::Xbl* create() {
            return il2cpp::create_object<app::Xbl>(get_class());
        }
        inline app::Xbl__Array* create_array(int size) {
            return il2cpp::array_new<app::Xbl__Array>(get_class(), size);
        }
        inline app::Xbl__Array* create_array(const std::vector<app::Xbl*>& items) {
            return il2cpp::array_new<app::Xbl__Array>(get_class(), items);
        }
    } // namespace Xbl
} // namespace app::classes::types
