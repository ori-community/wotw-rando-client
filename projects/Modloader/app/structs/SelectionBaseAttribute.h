#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SelectionBaseAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SelectionBaseAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectionBaseAttribute_DEFINED)
#define IL2CPP_STRUCT_SelectionBaseAttribute_DEFINED
struct SelectionBaseAttribute__Class;
struct SelectionBaseAttribute {
    struct SelectionBaseAttribute__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SelectionBaseAttribute_FWDDECL)
#define IL2CPP_STRUCT_SelectionBaseAttribute_FWDDECL
#include <Modloader/app/structs/SelectionBaseAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_SelectionBaseAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_SelectionBaseAttribute_DEFINED) && !defined(IL2CPP_STRUCT_SelectionBaseAttribute_FWDDECL)
#include <Modloader/app/structs/SelectionBaseAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SelectionBaseAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
