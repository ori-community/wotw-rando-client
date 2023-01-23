#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoSingleInstance_1_System_Object___StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoSingleInstance_1_System_Object___StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoSingleInstance_1_System_Object___StaticFields_DEFINED)
#define IL2CPP_STRUCT_MonoSingleInstance_1_System_Object___StaticFields_DEFINED
struct Object;
struct MonoSingleInstance_1_System_Object___StaticFields {
    struct Object* m_instance;
    bool m_initialized;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoSingleInstance_1_System_Object___StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MonoSingleInstance_1_System_Object___StaticFields_FWDDECL
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_MonoSingleInstance_1_System_Object___StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoSingleInstance_1_System_Object___StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MonoSingleInstance_1_System_Object___StaticFields_FWDDECL)
#include <Modloader/app/structs/MonoSingleInstance_1_System_Object___StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoSingleInstance_1_System_Object___StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
