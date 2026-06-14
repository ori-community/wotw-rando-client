#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingBootstrap_Start_d_25__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingBootstrap_Start_d_25__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBootstrap_Start_d_25__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadingBootstrap_Start_d_25__Fields_DEFINED
struct Object;
struct LoadingBootstrap;
struct String;
struct AsyncOperation_1;
struct __declspec(align(8)) LoadingBootstrap_Start_d_25__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct LoadingBootstrap* __4__this;
    float _maxPrewarmSize_5__2;
    float _maxPrewarmRatio_5__3;
    bool _skipShaderPrewarm_5__4;
    struct String* _maxPrewarmSizeArg_5__5;
    struct String* _maxPrewarmRatioArg_5__6;
    int32_t _oldVsync_5__7;
    struct AsyncOperation_1* _loadIntroOp_5__8;
    int32_t _i_5__9;
};
#endif
#if !defined(IL2CPP_STRUCT_LoadingBootstrap_Start_d_25__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoadingBootstrap_Start_d_25__Fields_FWDDECL
#include <Modloader/app/structs/AsyncOperation_1.h>
#include <Modloader/app/structs/LoadingBootstrap.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_LoadingBootstrap_Start_d_25__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBootstrap_Start_d_25__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoadingBootstrap_Start_d_25__Fields_FWDDECL)
#include <Modloader/app/structs/LoadingBootstrap_Start_d_25__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingBootstrap_Start_d_25__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
