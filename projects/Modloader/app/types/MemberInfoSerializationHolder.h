#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemberInfoSerializationHolder__Class.h>
#include <Modloader/app/structs/MemberInfoSerializationHolder.h>

namespace app::classes::types {
    namespace MemberInfoSerializationHolder {
        namespace {
            inline app::MemberInfoSerializationHolder__Class* type_info_ref = nullptr;
        }
        inline app::MemberInfoSerializationHolder__Class** type_info = &type_info_ref;
        inline app::MemberInfoSerializationHolder__Class* get_class() {
            return il2cpp::get_class<app::MemberInfoSerializationHolder__Class>(type_info, "System.Reflection", "MemberInfoSerializationHolder");
        }
        inline app::MemberInfoSerializationHolder* create() {
            return il2cpp::create_object<app::MemberInfoSerializationHolder>(get_class());
        }
    } // namespace MemberInfoSerializationHolder
} // namespace app::classes::types
