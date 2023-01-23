#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datatype_int__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datatype_int__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_int__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Datatype_int__StaticFields_DEFINED
struct Type;
struct FacetsChecker;
struct Datatype_int__StaticFields {
    struct Type* atomicValueType;
    struct Type* listValueType;
    struct FacetsChecker* numeric10FacetsChecker;
};
#endif
#if !defined(IL2CPP_STRUCT_Datatype_int__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Datatype_int__StaticFields_FWDDECL
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_Datatype_int__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datatype_int__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Datatype_int__StaticFields_FWDDECL)
#include <Modloader/app/structs/Datatype_int__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datatype_int__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
