#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCTextCylinderWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCTextCylinderWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextCylinderWrapper__Fields_DEFINED)
#include <Modloader/app/structs/CCTextCylinderWrapper_WrapMode__Enum.h>
#include <Modloader/app/structs/CCTextModifier__Fields.h>
#if defined(IL2CPP_STRUCT_CCTextModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_CCTextCylinderWrapper_WrapMode__Enum_DEFINED)
#define IL2CPP_STRUCT_CCTextCylinderWrapper__Fields_DEFINED
struct CCTextCylinderWrapper__Fields {
    struct CCTextModifier__Fields _;
    CCTextCylinderWrapper_WrapMode__Enum wrapMode;

    float radius;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCTextCylinderWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_CCTextCylinderWrapper__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CCTextCylinderWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextCylinderWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CCTextCylinderWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/CCTextCylinderWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCTextCylinderWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
