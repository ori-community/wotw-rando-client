#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnumDisabledAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnumDisabledAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumDisabledAttribute_DEFINED)
#define IL2CPP_STRUCT_EnumDisabledAttribute_DEFINED
struct EnumDisabledAttribute__Class;
struct EnumDisabledAttribute {
    struct EnumDisabledAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EnumDisabledAttribute_FWDDECL)
#define IL2CPP_STRUCT_EnumDisabledAttribute_FWDDECL
#include <Modloader/app/structs/EnumDisabledAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_EnumDisabledAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnumDisabledAttribute_DEFINED) && !defined(IL2CPP_STRUCT_EnumDisabledAttribute_FWDDECL)
#include <Modloader/app/structs/EnumDisabledAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnumDisabledAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
