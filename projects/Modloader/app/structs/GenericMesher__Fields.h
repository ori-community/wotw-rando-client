#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericMesher__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericMesher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericMesher__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericMesher__Fields_DEFINED
struct Configuration_1;
struct ITriangulator;
struct __declspec(align(8)) GenericMesher__Fields {
    struct Configuration_1* config;
    struct ITriangulator* triangulator;
};
#endif
#if !defined(IL2CPP_STRUCT_GenericMesher__Fields_FWDDECL)
#define IL2CPP_STRUCT_GenericMesher__Fields_FWDDECL
#include <Modloader/app/structs/Configuration_1.h>
#include <Modloader/app/structs/ITriangulator.h>
#endif
#undef IL2CPP_STRUCT_GenericMesher__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericMesher__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GenericMesher__Fields_FWDDECL)
#include <Modloader/app/structs/GenericMesher__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericMesher__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
