/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID CARDSELECT = 3128074203U;
        static const AkUniqueID EMPOWERTOKENSELECT = 2492898533U;
        static const AkUniqueID FOODBIOMESELECT = 1517328899U;
        static const AkUniqueID PAUSE = 3092587493U;
        static const AkUniqueID PLAY_ASPECTOFFEARSELECT = 492652091U;
        static const AkUniqueID PLAY_ASPECTOFRAGESELECT = 1081254850U;
        static const AkUniqueID PLAY_BUTTONHOVER = 479606568U;
        static const AkUniqueID PLAY_BUTTONPRESS = 2652178615U;
        static const AkUniqueID PLAY_CHARGERFOOTSTEPLEFT = 3632326709U;
        static const AkUniqueID PLAY_CHARGERFOOTSTEPRIGHT = 282746656U;
        static const AkUniqueID PLAY_CHARGERHITLEFT = 2655804996U;
        static const AkUniqueID PLAY_CHARGERHITRIGHT = 520370339U;
        static const AkUniqueID PLAY_CHARGERMISSLEFT = 543040975U;
        static const AkUniqueID PLAY_CHARGERMISSRIGHT = 166950546U;
        static const AkUniqueID PLAY_DREAMFORESTBIOMESELECT = 2070812680U;
        static const AkUniqueID PLAY_FOLLOWERFOOTSTEPLEFT = 1446475553U;
        static const AkUniqueID PLAY_FOLLOWERFOOTSTEPRIGHT = 1352216468U;
        static const AkUniqueID PLAY_GEYSERIDLE = 3006018685U;
        static const AkUniqueID PLAY_GOLEMATTACKCHARGE = 186019198U;
        static const AkUniqueID PLAY_GOLEMATTACKLAND = 1266269905U;
        static const AkUniqueID PLAY_GOLEMFOOTSTEPLEFT = 2784539119U;
        static const AkUniqueID PLAY_GOLEMFOOTSTEPRIGHT = 2467322162U;
        static const AkUniqueID PLAY_GOLEMLANDINGPRONE = 34687859U;
        static const AkUniqueID PLAY_LAVABIOMESELECT = 1598644012U;
        static const AkUniqueID PLAY_LEAPERATTACK = 3693645925U;
        static const AkUniqueID PLAY_LEAPERJUMP = 3377078321U;
        static const AkUniqueID PLAY_LEAPERMISS = 1839641105U;
        static const AkUniqueID PLAY_PLAYERFOOTSTEPSOLIDLEFT = 1137756071U;
        static const AkUniqueID PLAY_PLAYERFOOTSTEPSOLIDRIGHT = 3902117386U;
        static const AkUniqueID PLAY_PLAYERFOOTSTEPWETLEFT = 1308282858U;
        static const AkUniqueID PLAY_PLAYERFOOTSTEPWETRIGHT = 301871969U;
        static const AkUniqueID PLAY_PLAYERLAUNCHLAND = 1107055271U;
        static const AkUniqueID PLAY_SHIELDERATTACKHIT = 3366989763U;
        static const AkUniqueID PLAY_SHIELDERATTACKSWING = 3659895982U;
        static const AkUniqueID PLAY_SHIELDERFOOTSTEPLEFT = 2775887801U;
        static const AkUniqueID PLAY_SHIELDERFOOTSTEPRIGHT = 1328167532U;
        static const AkUniqueID PLAY_SPINATTACKHIT = 3321296225U;
        static const AkUniqueID PLAY_SPINATTACKSWING = 1332444756U;
        static const AkUniqueID PLAY_TESTMUSICPLAYLIST = 3745406025U;
        static const AkUniqueID PLAY_TOPLEVELAMBIENTCONTAINER = 3920001302U;
        static const AkUniqueID PLAY_TOPLEVELMUSICCONTAINER = 3458950525U;
        static const AkUniqueID PLAYERDASH = 2525052962U;
        static const AkUniqueID PLAYERJUMP = 4008126242U;
        static const AkUniqueID PLAYERLAND = 846198821U;
        static const AkUniqueID RESUME = 953277036U;
        static const AkUniqueID STOP_GEYSERIDLE = 2633931927U;
        static const AkUniqueID STOP_TOPLEVELAMBIENTCONTAINER = 2320038536U;
        static const AkUniqueID WEAKENTOKENSELECT = 590263643U;
        static const AkUniqueID WEAPONSWING = 899748333U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace BIOME
        {
            static const AkUniqueID GROUP = 835576787U;

            namespace STATE
            {
                static const AkUniqueID DEFAULT = 782826392U;
                static const AkUniqueID DREAMFOREST = 813526661U;
                static const AkUniqueID FOOD = 3031504781U;
                static const AkUniqueID LAVA = 540301611U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace BIOME

        namespace GAMEMODE
        {
            static const AkUniqueID GROUP = 261089142U;

            namespace STATE
            {
                static const AkUniqueID ACTIVEGAMEPLAY = 2280308571U;
                static const AkUniqueID GAMEOVER = 4158285989U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID PAUSED = 319258907U;
                static const AkUniqueID TITLE = 3705726509U;
                static const AkUniqueID VICTORY = 2716678721U;
            } // namespace STATE
        } // namespace GAMEMODE

        namespace MENUSTATE
        {
            static const AkUniqueID GROUP = 1548586727U;

            namespace STATE
            {
                static const AkUniqueID INMENU = 3374585465U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID OUTSIDEMENU = 1858159279U;
            } // namespace STATE
        } // namespace MENUSTATE

    } // namespace STATES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID MASTERVOLUME = 2918011349U;
    } // namespace GAME_PARAMETERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID EVANTESTSOUNDBANK = 1198232180U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID AMBIENTSOUNDBUS = 1953976762U;
        static const AkUniqueID EXTERNALSFXBUS = 2550921985U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MUSICBUS = 2886307548U;
        static const AkUniqueID PLAYERSFXBUS = 2319746103U;
        static const AkUniqueID UISFXBUS = 3164795806U;
    } // namespace BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
