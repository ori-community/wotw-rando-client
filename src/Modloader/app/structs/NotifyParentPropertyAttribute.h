#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NotifyParentPropertyAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NotifyParentPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyParentPropertyAttribute_DEFINED)
#include <Modloader/app/structs/NotifyParentPropertyAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_NotifyParentPropertyAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_NotifyParentPropertyAttribute_DEFINED
struct NotifyParentPropertyAttribute__Class;
struct NotifyParentPropertyAttribute {
    struct NotifyParentPropertyAttribute__Class* klass;
    MonitorData* monitor;
    struct NotifyParentPropertyAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NotifyParentPropertyAttribute_FWDDECL)
#define IL2CPP_STRUCT_NotifyParentPropertyAttribute_FWDDECL
#include <Modloader/app/structs/NotifyParentPropertyAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_NotifyParentPropertyAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_NotifyParentPropertyAttribute_DEFINED) && !defined(IL2CPP_STRUCT_NotifyParentPropertyAttribute_FWDDECL)
#include <Modloader/app/structs/NotifyParentPropertyAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NotifyParentPropertyAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
