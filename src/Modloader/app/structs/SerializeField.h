#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SerializeField_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SerializeField_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializeField_DEFINED)
#define IL2CPP_STRUCT_SerializeField_DEFINED
struct SerializeField__Class;
struct SerializeField {
    struct SerializeField__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SerializeField_FWDDECL)
#define IL2CPP_STRUCT_SerializeField_FWDDECL
#include <Modloader/app/structs/SerializeField__Class.h>
#endif
#undef IL2CPP_STRUCT_SerializeField_INITIALIZING
#if !defined(IL2CPP_STRUCT_SerializeField_DEFINED) && !defined(IL2CPP_STRUCT_SerializeField_FWDDECL)
#include <Modloader/app/structs/SerializeField.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SerializeField.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
