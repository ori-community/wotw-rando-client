#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Int16Converter__Class.h>
#include <Modloader/app/structs/Int16Converter.h>

namespace app::classes::types {
    namespace Int16Converter {
        namespace {
            inline app::Int16Converter__Class* type_info_ref = nullptr;
        }
        inline app::Int16Converter__Class** type_info = &type_info_ref;
        inline app::Int16Converter__Class* get_class() {
            return il2cpp::get_class<app::Int16Converter__Class>(type_info, "System.ComponentModel", "Int16Converter");
        }
        inline app::Int16Converter* create() {
            return il2cpp::create_object<app::Int16Converter>(get_class());
        }
    } // namespace Int16Converter
} // namespace app::classes::types
