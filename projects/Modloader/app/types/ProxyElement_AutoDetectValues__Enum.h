#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProxyElement_AutoDetectValues__Enum__Class.h>
#include <Modloader/app/structs/ProxyElement_AutoDetectValues__Enum.h>

namespace app::classes::types {
    namespace ProxyElement_AutoDetectValues__Enum {
        namespace {
            inline app::ProxyElement_AutoDetectValues__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ProxyElement_AutoDetectValues__Enum__Class** type_info = &type_info_ref;
        inline app::ProxyElement_AutoDetectValues__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ProxyElement_AutoDetectValues__Enum__Class>(type_info, "System.Net.Configuration", "ProxyElement", "AutoDetectValues");
        }
        inline app::ProxyElement_AutoDetectValues__Enum* create() {
            return il2cpp::create_object<app::ProxyElement_AutoDetectValues__Enum>(get_class());
        }
    } // namespace ProxyElement_AutoDetectValues__Enum
} // namespace app::classes::types
