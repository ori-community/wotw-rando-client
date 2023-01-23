#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkReflectionPathInfoArray__Class.h>
#include <Modloader/app/structs/AkReflectionPathInfoArray.h>

namespace app::classes::types {
    namespace AkReflectionPathInfoArray {
        namespace {
            inline app::AkReflectionPathInfoArray__Class* type_info_ref = nullptr;
        }
        inline app::AkReflectionPathInfoArray__Class** type_info = &type_info_ref;
        inline app::AkReflectionPathInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkReflectionPathInfoArray__Class>(type_info, "", "AkReflectionPathInfoArray");
        }
        inline app::AkReflectionPathInfoArray* create() {
            return il2cpp::create_object<app::AkReflectionPathInfoArray>(get_class());
        }
    } // namespace AkReflectionPathInfoArray
} // namespace app::classes::types
