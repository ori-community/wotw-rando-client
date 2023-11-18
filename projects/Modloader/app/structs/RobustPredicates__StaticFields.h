#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RobustPredicates__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RobustPredicates__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RobustPredicates__StaticFields_DEFINED)
#define IL2CPP_STRUCT_RobustPredicates__StaticFields_DEFINED
struct Object;
struct RobustPredicates;
struct RobustPredicates__StaticFields {
    struct Object* creationLock;
    struct RobustPredicates* _default;
    double epsilon;
    double splitter;
    double resulterrbound;
    double ccwerrboundA;
    double ccwerrboundB;
    double ccwerrboundC;
    double iccerrboundA;
    double iccerrboundB;
    double iccerrboundC;
};
#endif
#if !defined(IL2CPP_STRUCT_RobustPredicates__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_RobustPredicates__StaticFields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RobustPredicates.h>
#endif
#undef IL2CPP_STRUCT_RobustPredicates__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RobustPredicates__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_RobustPredicates__StaticFields_FWDDECL)
#include <Modloader/app/structs/RobustPredicates__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RobustPredicates__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
