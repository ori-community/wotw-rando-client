#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GasballStayInPlace__Class.h>
#include <Modloader/app/structs/GasballStayInPlace.h>

namespace app::classes::types {
    namespace GasballStayInPlace {
        namespace {
            inline app::GasballStayInPlace__Class* type_info_ref = nullptr;
        }
        inline app::GasballStayInPlace__Class** type_info = &type_info_ref;
        inline app::GasballStayInPlace__Class* get_class() {
            return il2cpp::get_class<app::GasballStayInPlace__Class>(type_info, "", "GasballStayInPlace");
        }
        inline app::GasballStayInPlace* create() {
            return il2cpp::create_object<app::GasballStayInPlace>(get_class());
        }
    } // namespace GasballStayInPlace
} // namespace app::classes::types
