#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoField_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoField_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoField_DEFINED)
#include <Modloader/app/structs/MonoField__Fields.h>
#if defined(IL2CPP_STRUCT_MonoField__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoField_DEFINED
struct MonoField__Class;
struct MonoField {
    struct MonoField__Class* klass;
    MonitorData* monitor;
    struct MonoField__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoField_FWDDECL)
#define IL2CPP_STRUCT_MonoField_FWDDECL
#include <Modloader/app/structs/MonoField__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoField_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoField_DEFINED) && !defined(IL2CPP_STRUCT_MonoField_FWDDECL)
#include <Modloader/app/structs/MonoField.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoField.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
