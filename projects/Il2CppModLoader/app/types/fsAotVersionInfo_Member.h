#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsAotVersionInfo_Member {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsAotVersionInfo_Member__Class** type_info;
        inline app::fsAotVersionInfo_Member__Class* get_class() {
            return il2cpp::get_nested_class<app::fsAotVersionInfo_Member__Class>(type_info, "FullSerializer", "fsAotVersionInfo", "Member");
        }
        inline app::fsAotVersionInfo_Member* create() {
            return il2cpp::create_object<app::fsAotVersionInfo_Member>(get_class());
        }
        inline app::fsAotVersionInfo_Member__Boxed* box(app::fsAotVersionInfo_Member value) {
            return il2cpp::box_value<app::fsAotVersionInfo_Member__Boxed>(get_class(), value);
        }
        inline app::fsAotVersionInfo_Member__Array* create_array(int size) {
            return il2cpp::array_new<app::fsAotVersionInfo_Member__Array>(get_class(), size);
        }
        inline app::fsAotVersionInfo_Member__Array* create_array(const std::vector<app::fsAotVersionInfo_Member__Boxed>& items) {
            return il2cpp::array_new<app::fsAotVersionInfo_Member__Array>(get_class(), items);
        }
    } // namespace fsAotVersionInfo_Member
} // namespace app::classes::types
