#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokNpcEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokNpcEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokNpcEntity_DEFINED)
#include <Modloader/app/structs/KwolokNpcEntity__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokNpcEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokNpcEntity_DEFINED
struct KwolokNpcEntity__Class;
struct KwolokNpcEntity {
    struct KwolokNpcEntity__Class* klass;
    MonitorData* monitor;
    struct KwolokNpcEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokNpcEntity_FWDDECL)
#define IL2CPP_STRUCT_KwolokNpcEntity_FWDDECL
#include <Modloader/app/structs/KwolokNpcEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_KwolokNpcEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokNpcEntity_DEFINED) && !defined(IL2CPP_STRUCT_KwolokNpcEntity_FWDDECL)
#include <Modloader/app/structs/KwolokNpcEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokNpcEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
