#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkDiffractionPathInfoArray__Class.h>
#include <Modloader/app/structs/AkDiffractionPathInfoArray.h>

namespace app::classes::types {
    namespace AkDiffractionPathInfoArray {
        namespace {
            inline app::AkDiffractionPathInfoArray__Class* type_info_ref = nullptr;
        }
        inline app::AkDiffractionPathInfoArray__Class** type_info = &type_info_ref;
        inline app::AkDiffractionPathInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkDiffractionPathInfoArray__Class>(type_info, "", "AkDiffractionPathInfoArray");
        }
        inline app::AkDiffractionPathInfoArray* create() {
            return il2cpp::create_object<app::AkDiffractionPathInfoArray>(get_class());
        }
    } // namespace AkDiffractionPathInfoArray
} // namespace app::classes::types
