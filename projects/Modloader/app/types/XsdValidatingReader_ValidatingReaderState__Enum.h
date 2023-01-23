#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XsdValidatingReader_ValidatingReaderState__Enum__Class.h>
#include <Modloader/app/structs/XsdValidatingReader_ValidatingReaderState__Enum.h>

namespace app::classes::types {
    namespace XsdValidatingReader_ValidatingReaderState__Enum {
        namespace {
            inline app::XsdValidatingReader_ValidatingReaderState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XsdValidatingReader_ValidatingReaderState__Enum__Class** type_info = &type_info_ref;
        inline app::XsdValidatingReader_ValidatingReaderState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XsdValidatingReader_ValidatingReaderState__Enum__Class>(type_info, "System.Xml", "XsdValidatingReader", "ValidatingReaderState");
        }
        inline app::XsdValidatingReader_ValidatingReaderState__Enum* create() {
            return il2cpp::create_object<app::XsdValidatingReader_ValidatingReaderState__Enum>(get_class());
        }
    } // namespace XsdValidatingReader_ValidatingReaderState__Enum
} // namespace app::classes::types
