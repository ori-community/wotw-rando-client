#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValueWithMaxValueSerializer__Class.h>
#include <Modloader/app/structs/ValueWithMaxValueSerializer.h>

namespace app::classes::types {
    namespace ValueWithMaxValueSerializer {
        namespace {
            inline app::ValueWithMaxValueSerializer__Class* type_info_ref = nullptr;
        }
        inline app::ValueWithMaxValueSerializer__Class** type_info = &type_info_ref;
        inline app::ValueWithMaxValueSerializer__Class* get_class() {
            return il2cpp::get_class<app::ValueWithMaxValueSerializer__Class>(type_info, "", "ValueWithMaxValueSerializer");
        }
        inline app::ValueWithMaxValueSerializer* create() {
            return il2cpp::create_object<app::ValueWithMaxValueSerializer>(get_class());
        }
    } // namespace ValueWithMaxValueSerializer
} // namespace app::classes::types
